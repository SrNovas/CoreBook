// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLAuthor.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class APLBook;

@interface APLAuthorID : NSManagedObjectID {}
@end

@interface _APLAuthor : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) APLAuthorID *objectID;

@property (nonatomic, strong) NSString* name;

@property (nonatomic, strong, nullable) NSSet<APLBook*> *books;
- (nullable NSMutableSet<APLBook*>*)booksSet;

@end

@interface _APLAuthor (BooksCoreDataGeneratedAccessors)
- (void)addBooks:(NSSet<APLBook*>*)value_;
- (void)removeBooks:(NSSet<APLBook*>*)value_;
- (void)addBooksObject:(APLBook*)value_;
- (void)removeBooksObject:(APLBook*)value_;

@end

@interface _APLAuthor (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (NSMutableSet<APLBook*>*)primitiveBooks;
- (void)setPrimitiveBooks:(NSMutableSet<APLBook*>*)value;

@end

@interface APLAuthorAttributes: NSObject 
+ (NSString *)name;
@end

@interface APLAuthorRelationships: NSObject
+ (NSString *)books;
@end

NS_ASSUME_NONNULL_END
