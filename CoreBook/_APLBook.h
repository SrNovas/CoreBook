// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLBook.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class APLAnnotation;
@class APLAuthor;
@class APLBookTag;
@class APLCover;
@class APLPdfData;

@interface APLBookID : NSManagedObjectID {}
@end

@interface _APLBook : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) APLBookID *objectID;

@property (nonatomic, strong) NSString* name;

@property (nonatomic, strong) NSString* urlImage;

@property (nonatomic, strong) NSString* urlPdf;

@property (nonatomic, strong, nullable) NSSet<APLAnnotation*> *annotation;
- (nullable NSMutableSet<APLAnnotation*>*)annotationSet;

@property (nonatomic, strong) NSSet<APLAuthor*> *authors;
- (NSMutableSet<APLAuthor*>*)authorsSet;

@property (nonatomic, strong) NSSet<APLBookTag*> *bookTags;
- (NSMutableSet<APLBookTag*>*)bookTagsSet;

@property (nonatomic, strong) APLCover *coverImage;

@property (nonatomic, strong) APLPdfData *pdfDate;

@end

@interface _APLBook (AnnotationCoreDataGeneratedAccessors)
- (void)addAnnotation:(NSSet<APLAnnotation*>*)value_;
- (void)removeAnnotation:(NSSet<APLAnnotation*>*)value_;
- (void)addAnnotationObject:(APLAnnotation*)value_;
- (void)removeAnnotationObject:(APLAnnotation*)value_;

@end

@interface _APLBook (AuthorsCoreDataGeneratedAccessors)
- (void)addAuthors:(NSSet<APLAuthor*>*)value_;
- (void)removeAuthors:(NSSet<APLAuthor*>*)value_;
- (void)addAuthorsObject:(APLAuthor*)value_;
- (void)removeAuthorsObject:(APLAuthor*)value_;

@end

@interface _APLBook (BookTagsCoreDataGeneratedAccessors)
- (void)addBookTags:(NSSet<APLBookTag*>*)value_;
- (void)removeBookTags:(NSSet<APLBookTag*>*)value_;
- (void)addBookTagsObject:(APLBookTag*)value_;
- (void)removeBookTagsObject:(APLBookTag*)value_;

@end

@interface _APLBook (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (NSString*)primitiveUrlImage;
- (void)setPrimitiveUrlImage:(NSString*)value;

- (NSString*)primitiveUrlPdf;
- (void)setPrimitiveUrlPdf:(NSString*)value;

- (NSMutableSet<APLAnnotation*>*)primitiveAnnotation;
- (void)setPrimitiveAnnotation:(NSMutableSet<APLAnnotation*>*)value;

- (NSMutableSet<APLAuthor*>*)primitiveAuthors;
- (void)setPrimitiveAuthors:(NSMutableSet<APLAuthor*>*)value;

- (NSMutableSet<APLBookTag*>*)primitiveBookTags;
- (void)setPrimitiveBookTags:(NSMutableSet<APLBookTag*>*)value;

- (APLCover*)primitiveCoverImage;
- (void)setPrimitiveCoverImage:(APLCover*)value;

- (APLPdfData*)primitivePdfDate;
- (void)setPrimitivePdfDate:(APLPdfData*)value;

@end

@interface APLBookAttributes: NSObject 
+ (NSString *)name;
+ (NSString *)urlImage;
+ (NSString *)urlPdf;
@end

@interface APLBookRelationships: NSObject
+ (NSString *)annotation;
+ (NSString *)authors;
+ (NSString *)bookTags;
+ (NSString *)coverImage;
+ (NSString *)pdfDate;
@end

NS_ASSUME_NONNULL_END
