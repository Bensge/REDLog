#define KNORMAL  "\x1B[0m"
#define KRED  "\x1B[31m"
 
#define REDLog(fmt, ...) NSLog((@"%s" fmt @"%s"),KRED,##__VA_ARGS__,KNORMAL)