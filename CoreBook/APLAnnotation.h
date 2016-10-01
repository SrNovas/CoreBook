#import "_APLAnnotation.h"
@import UIKit;

@interface APLAnnotation : _APLAnnotation {}

+(instancetype) annotationWithBook:(APLBook *) annBook
                         title:(NSString *) annTitle
                          text:(NSString *) annText
                         photo:(UIImage *) annPhoto
                       context:(NSManagedObjectContext *) annContext;

-(NSArray *) array;

@end
