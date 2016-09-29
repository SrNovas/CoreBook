#import "_APLAnnotation.h"
@import UIKit;

@interface APLAnnotation : _APLAnnotation

+(instancetype) annotationWithBook:(APLBook *) annBook
                         title:(NSString *) image
                          text:(NSString *) pdf
                         photo:(UIImage *) annPhoto
                       context:(NSManagedObjectContext *) context;

@end
