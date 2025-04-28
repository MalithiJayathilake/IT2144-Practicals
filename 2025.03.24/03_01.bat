@echo off

echo Enter the First Number:
set /p num1=

echo Enter the Second Number:
set /p num2=

set /a addition=num1+num2
set /a substraction=num1-num2
set /a multiplication=num1*num2
set /a division=num1/num2

echo addition : %addition%
echo substraction : %substraction%
echo multiplication : %multiplication%
echo division : %division%

pause