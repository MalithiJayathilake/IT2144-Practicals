@echo off
set /p year=Enter Your Birth Year:
set /a cur_year=%date:~10,4%


set /a age=cur_year-year
echo Your Age is %age%

set /a Month=%date:~4,2%
echo The Month is %Month%

set /a Day=%date:~7,2%
echo The Day is %Day%
pause