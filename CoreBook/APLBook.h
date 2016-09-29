#import "_APLBook.h"

@interface APLBook : _APLBook

+(instancetype) bookWithName:(NSString *) name
                    urlImage:(NSString *) image
                      urlPDF:(NSString *) pdf
                     context:(NSManagedObjectContext *) context;

@end
