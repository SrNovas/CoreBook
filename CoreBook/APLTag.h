#import "_APLTag.h"

@interface APLTag : _APLTag

+(instancetype) tagWithName:(NSString*) name
                    context:(NSManagedObjectContext*) context;

@end
