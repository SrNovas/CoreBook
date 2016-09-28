// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLCover.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class APLBook;

@interface APLCoverID : NSManagedObjectID {}
@end

@interface _APLCover : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) APLCoverID *objectID;

@property (nonatomic, strong, nullable) NSData* imageData;

@property (nonatomic, strong, nullable) APLBook *book;

@end

@interface _APLCover (CoreDataGeneratedPrimitiveAccessors)

- (NSData*)primitiveImageData;
- (void)setPrimitiveImageData:(NSData*)value;

- (APLBook*)primitiveBook;
- (void)setPrimitiveBook:(APLBook*)value;

@end

@interface APLCoverAttributes: NSObject 
+ (NSString *)imageData;
@end

@interface APLCoverRelationships: NSObject
+ (NSString *)book;
@end

NS_ASSUME_NONNULL_END
