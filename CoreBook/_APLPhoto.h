// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLPhoto.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class APLAnnotation;

@interface APLPhotoID : NSManagedObjectID {}
@end

@interface _APLPhoto : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) APLPhotoID *objectID;

@property (nonatomic, strong, nullable) NSData* imageData;

@property (nonatomic, strong) NSSet<APLAnnotation*> *annotations;
- (NSMutableSet<APLAnnotation*>*)annotationsSet;

@end

@interface _APLPhoto (AnnotationsCoreDataGeneratedAccessors)
- (void)addAnnotations:(NSSet<APLAnnotation*>*)value_;
- (void)removeAnnotations:(NSSet<APLAnnotation*>*)value_;
- (void)addAnnotationsObject:(APLAnnotation*)value_;
- (void)removeAnnotationsObject:(APLAnnotation*)value_;

@end

@interface _APLPhoto (CoreDataGeneratedPrimitiveAccessors)

- (NSData*)primitiveImageData;
- (void)setPrimitiveImageData:(NSData*)value;

- (NSMutableSet<APLAnnotation*>*)primitiveAnnotations;
- (void)setPrimitiveAnnotations:(NSMutableSet<APLAnnotation*>*)value;

@end

@interface APLPhotoAttributes: NSObject 
+ (NSString *)imageData;
@end

@interface APLPhotoRelationships: NSObject
+ (NSString *)annotations;
@end

NS_ASSUME_NONNULL_END
