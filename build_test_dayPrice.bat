@echo off
g++ -std=c++17 -Iheader -IC:\vcpkg\installed\x64-mingw-dynamic\include src\taxiPrice.cpp test_dayPrice.cpp -LC:\vcpkg\installed\x64-mingw-dynamic\lib -lgtest -o test.exe
if %ERRORLEVEL% neq 0 (
    echo Build failed!
    exit /b 1
)
echo Build successful!
pause

