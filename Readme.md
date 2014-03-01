##REDLog
 
#Wat is this?
This is a macro named REDLog() which can be used as drop-in NSLog replacement, without any syntax changes. However, any log messages will appear as red text in the system log (at least if you're using deviceconsole by @rpetrich). Especially useful if the syslog's very noisy.
 
 
#Example pls.
NSLog(@"Hi, Yus = ",yus ? @"YES" : @"NO");  =>  REDLog(@"Hi, Yus = ",yus ? @"YES" : @"NO");
 
 
#Is it Magic?
Absolutely.