// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLPdfData.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class APLBook;

@interface APLPdfDataID : NSManagedObjectID {}
@end

@interface _APLPdfData : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) APLPdfDataID *objectID;

@property (nonatomic, strong, nullable) NSData* pdfData;

@property (nonatomic, strong) APLBook *book;

@end

@interface _APLPdfData (CoreDataGeneratedPrimitiveAccessors)

- (NSData*)primitivePdfData;
- (void)setPrimitivePdfData:(NSData*)value;

- (APLBook*)primitiveBook;
- (void)setPrimitiveBook:(APLBook*)value;

@end

@interface APLPdfDataAttributes: NSObject 
+ (NSString *)pdfData;
@end

@interface APLPdfDataRelationships: NSObject
+ (NSString *)book;
@end

NS_ASSUME_NONNULL_END
