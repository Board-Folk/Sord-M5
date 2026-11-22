setlocal
set CUPLDIR=C:\Wincupl\Shared
set CUPL=%CUPLDIR%\cupl.exe
set FIT1502=C:\Wincupl\WinCupl\Fitters\fit1502.exe
set PYTHONPATH=E:\External\prjbureau
set FUSECONV=python -m util.fuseconv
set PROJECT=sord-GA015

REM CUPL to Berkeley PLA format (TT2) 
%CUPL% -j -m4 -x -f -u %CUPLDIR%\cupl.dl %PROJECT%.pld

REM TT2 to JED
%FIT1502% -i %PROJECT%.tt2 -CUPL -dev P1502C44 -JTAG OFF -device TQFP44

REM JED to SVF
%FUSECONV% %PROJECT%.jed %PROJECT%.svf
