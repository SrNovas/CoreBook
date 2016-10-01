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

-(NSArray *) array{
    
    NSMutableArray *elements = [NSMutableArray array];
    
    if (self.name) {
    
        [elements addObject:self.name];
    
    }
    
    if(self.text){
     
        [elements addObject:self.text];
    
    }
    
    if(self.photo.image){
    
        [elements addObject:self.photo.image];
    
    }
    
    return elements;
    
}

+(NSArray *) observableAttributes{
    
    //Devuelvo mi APLAnnotationRelationships de mi _APLAnnotation.m (Machine).
    return @[APLAnnotationRelationships.photo,
             APLAnnotationAttributes.text,
             APLAnnotationAttributes.name];

}

- (void)observeValueForKeyPath:(NSString *) keyPath
                      ofObject:(id) object
                        change:(NSDictionary *) change
                       context:(void *) context {
    
    self.modificationDate = [NSDate date];

}

@end
