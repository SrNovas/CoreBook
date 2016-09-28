// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLTag.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class APLBookTag;

@interface APLTagID : NSManagedObjectID {}
@end

@interface _APLTag : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) APLTagID *objectID;

@property (nonatomic, strong) NSString* name;

@property (nonatomic, strong, nullable) NSString* proxyForSorting;

@property (nonatomic, strong) NSSet<APLBookTag*> *bookTags;
- (NSMutableSet<APLBookTag*>*)bookTagsSet;

@end

@interface _APLTag (BookTagsCoreDataGeneratedAccessors)
- (void)addBookTags:(NSSet<APLBookTag*>*)value_;
- (void)removeBookTags:(NSSet<APLBookTag*>*)value_;
- (void)addBookTagsObject:(APLBookTag*)value_;
- (void)removeBookTagsObject:(APLBookTag*)value_;

@end

@interface _APLTag (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (NSString*)primitiveProxyForSorting;
- (void)setPrimitiveProxyForSorting:(NSString*)value;

- (NSMutableSet<APLBookTag*>*)primitiveBookTags;
- (void)setPrimitiveBookTags:(NSMutableSet<APLBookTag*>*)value;

@end

@interface APLTagAttributes: NSObject 
+ (NSString *)name;
+ (NSString *)proxyForSorting;
@end

@interface APLTagRelationships: NSObject
+ (NSString *)bookTags;
@end

NS_ASSUME_NONNULL_END
