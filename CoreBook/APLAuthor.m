#import "APLAuthor.h"

@interface APLAuthor ()

// Private interface goes here.

@end

@implementation APLAuthor

+(instancetype) authorWithName:(NSString *) name
                       context:(NSManagedObjectContext *) context{
    
    APLAuthor *theAuthor = [self insertInManagedObjectContext:context];
    
    theAuthor.name = name;
    
    return theAuthor;
    
}
@end
