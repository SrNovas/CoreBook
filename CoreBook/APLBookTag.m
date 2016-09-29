#import "APLBookTag.h"

@interface APLBookTag ()

// Private interface goes here.

@end

@implementation APLBookTag

+(instancetype) bookTagWithBook: (APLBook *) book
                            tag:(APLTag *) tag
                        context:(NSManagedObjectContext *) context{
    
    APLBookTag *myTag = [self insertInManagedObjectContext:context];
    
    myTag.book = book;
    myTag.tag = tag;
    
    return myTag;
    
}

@end
