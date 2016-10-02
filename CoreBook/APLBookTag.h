#import "_APLBookTag.h"

@class APLBook;
@class APLTag;

@interface APLBookTag : _APLBookTag

+(instancetype) bookTagWithBook: (APLBook *) book
                            tag:(APLTag *) tag
                        context:(NSManagedObjectContext *) context;

//Me falta por implementarlo
+(instancetype) bookTagWithName:(NSString*) name
                           Book:(APLBook*) book
                        context:(NSManagedObjectContext*) context;

@end
