#import "_APLBookTag.h"

@interface APLBookTag : _APLBookTag

+(instancetype) bookTagWithBook: (APLBook *) book
                            tag:(APLTag *) tag
                        context:(NSManagedObjectContext *) context;

@end
