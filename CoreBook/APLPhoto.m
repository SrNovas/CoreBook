#import "APLPhoto.h"

@interface APLPhoto ()

// Private interface goes here.

@end

@implementation APLPhoto

-(UIImage *) image{
    
    //Tiro de mi imageData del Machine y lo convierto NSData.
    return [UIImage imageWithData:self.imageData];
    
}

-(void)setImage:(UIImage *) image{
    
    self.imageData = UIImageJPEGRepresentation(image, 0.9);
    
}

@end
