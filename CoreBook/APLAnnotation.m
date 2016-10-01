#import "APLAnnotation.h"
#import "APLBook.h"
#import "APLPhoto.h"

@interface APLAnnotation ()

// Private interface goes here.

@end

@implementation APLAnnotation

+(instancetype) annotationWithBook:(APLBook *) annBook
                             title:(NSString *) annTitle
                              text:(NSString *) annText
                             photo:(UIImage *) annPhoto
                           context:(NSManagedObjectContext *) annContext{
    
    APLAnnotation *myText = [self insertInManagedObjectContext:annContext];
    
    myText.name = annTitle;
    myText.text = annText;
    myText.photo = [APLPhoto insertInManagedObjectContext:annContext];
    
    if(annPhoto != nil){
        
        myText.photo.image = annPhoto;
        
    }
    
    myText.creationDate = [NSDate date];
    myText.modificationDate = [NSDate date];
    
    return myText;
    
}

@end
