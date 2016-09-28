// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLAnnotation.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class APLBook;
@class APLPhoto;

@interface APLAnnotationID : NSManagedObjectID {}
@end

@interface _APLAnnotation : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) APLAnnotationID *objectID;

@property (nonatomic, strong, nullable) NSDate* creationDate;

@property (nonatomic, strong, nullable) NSDate* modificationDate;

@property (nonatomic, strong, nullable) NSString* name;

@property (nonatomic, strong, nullable) NSString* text;

@property (nonatomic, strong) APLBook *book;

@property (nonatomic, strong) APLPhoto *photo;

@end

@interface _APLAnnotation (CoreDataGeneratedPrimitiveAccessors)

- (NSDate*)primitiveCreationDate;
- (void)setPrimitiveCreationDate:(NSDate*)value;

- (NSDate*)primitiveModificationDate;
- (void)setPrimitiveModificationDate:(NSDate*)value;

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (NSString*)primitiveText;
- (void)setPrimitiveText:(NSString*)value;

- (APLBook*)primitiveBook;
- (void)setPrimitiveBook:(APLBook*)value;

- (APLPhoto*)primitivePhoto;
- (void)setPrimitivePhoto:(APLPhoto*)value;

@end

@interface APLAnnotationAttributes: NSObject 
+ (NSString *)creationDate;
+ (NSString *)modificationDate;
+ (NSString *)name;
+ (NSString *)text;
@end

@interface APLAnnotationRelationships: NSObject
+ (NSString *)book;
+ (NSString *)photo;
@end

NS_ASSUME_NONNULL_END
