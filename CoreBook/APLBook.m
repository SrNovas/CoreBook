#import "APLBook.h"

@interface APLBook ()

// Private interface goes here.

@end

@implementation APLBook

+(instancetype) bookWithName:(NSString *) name
                    urlImage:(NSString *) image
                      urlPDF:(NSString *) pdf
                     context:(NSManagedObjectContext *) context{
    
    APLBook *book = [self insertInManagedObjectContext:context];
    
    book.name = name;
    book.urlPdf = pdf;
    book.urlImage = image;
    
    return book;
    
}

@end
