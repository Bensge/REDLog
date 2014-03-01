#REDLog
 
##Wat is this?
This is a macro named REDLog() which can be used as drop-in NSLog replacement, without any syntax changes. However, any log messages will appear as red text in the system log (at least if you're using deviceconsole by @rpetrich). Especially useful if the syslog's very noisy.
 
 
##Example pls.
NSLog(@"Hi, Yus = ",yus ? @"YES" : @"NO");  =>  REDLog(@"Hi, Yus = ",yus ? @"YES" : @"NO");
 
 
##Is it Magic?
Absolutely.

REDLog uses [ANSI color codes](http://en.wikipedia.org/wiki/ANSI_escape_code#Colors) an inserts the string for red color at the beginning of the log message, at the end it inserts the white color code, that' all it does. Therefore it only works in terminal environments that support ANSI color codes, e.x. OSX' default Terminal.app.
