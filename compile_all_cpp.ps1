param()

# Compiles every .cpp file in the workspace (recursively) using MinGW g++
$gpp = 'C:\\mingw64\\bin\\g++.exe'
if (-not (Test-Path $gpp)) {
    Write-Host "g++ not found at $gpp" -ForegroundColor Red
    exit 2
}

$failures = @()
Get-ChildItem -Path (Get-Location) -Filter *.cpp -Recurse | ForEach-Object {
    $src = $_.FullName
    $exe = Join-Path $_.Directory.FullName ($_.BaseName + '.exe')
    Write-Host "Compiling: $src"
    & $gpp -fdiagnostics-color=always -g -- "$src" -o -- "$exe"
    if ($LASTEXITCODE -ne 0) {
        Write-Host "FAILED: $src" -ForegroundColor Red
        $failures += $src
    } else {
        Write-Host "OK: $exe" -ForegroundColor Green
    }
}

if ($failures.Count -gt 0) {
    Write-Host "\nCompilation finished: $($failures.Count) file(s) failed." -ForegroundColor Red
    exit 1
} else {
    Write-Host "\nAll .cpp files compiled successfully." -ForegroundColor Green
    exit 0
}
