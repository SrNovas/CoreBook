#import "APLAnnotation.h"

@interface APLAnnotation ()

// Private interface goes here.

@end

@implementation APLAnnotation

+(instancetype) annotationBook:(APLBook *) annBook
                             WithTitle:(NSString *) annTitle
                              text:(NSString *) annText
                             photo:(UIImage *) annPhoto
                           context:(NSManagedObjectContext *) context{
    
    APLAnnotation *myText = [self insertInManagedObjectContext:context];
    
    myText.name = annTitle;
    myText.text = annText;
    
    return myText;
    
}

@end
