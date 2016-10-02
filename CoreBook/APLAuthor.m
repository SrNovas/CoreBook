#import "APLAuthor.h"

@interface APLAuthor ()

// Private interface goes here.

@end

@implementation APLAuthor

//Falta por hacer
+(instancetype) authorWithName:(NSString *) name
                       context:(NSManagedObjectContext *) context{
    
    APLAuthor *theAuthor = [self insertInManagedObjectContext:context];
    
    theAuthor.name = name;
    
    return theAuthor;
    
}
@end
