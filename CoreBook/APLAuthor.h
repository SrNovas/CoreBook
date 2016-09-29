#import "_APLAuthor.h"

@interface APLAuthor : _APLAuthor

+(instancetype) authorWithName:(NSString *) name
                       context:(NSManagedObjectContext *) context;

@end
