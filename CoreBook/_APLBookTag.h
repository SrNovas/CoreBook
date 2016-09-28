// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLBookTag.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class APLBook;
@class APLTag;

@interface APLBookTagID : NSManagedObjectID {}
@end

@interface _APLBookTag : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) APLBookTagID *objectID;

@property (nonatomic, strong) APLBook *book;

@property (nonatomic, strong) APLTag *tag;

@end

@interface _APLBookTag (CoreDataGeneratedPrimitiveAccessors)

- (APLBook*)primitiveBook;
- (void)setPrimitiveBook:(APLBook*)value;

- (APLTag*)primitiveTag;
- (void)setPrimitiveTag:(APLTag*)value;

@end

@interface APLBookTagRelationships: NSObject
+ (NSString *)book;
+ (NSString *)tag;
@end

NS_ASSUME_NONNULL_END
