// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLAuthor.m instead.

#import "_APLAuthor.h"

@implementation APLAuthorID
@end

@implementation _APLAuthor

+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Author" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Author";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Author" inManagedObjectContext:moc_];
}

- (APLAuthorID*)objectID {
	return (APLAuthorID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];

	return keyPaths;
}

@dynamic name;

@dynamic books;

- (NSMutableSet<APLBook*>*)booksSet {
	[self willAccessValueForKey:@"books"];

	NSMutableSet<APLBook*> *result = (NSMutableSet<APLBook*>*)[self mutableSetValueForKey:@"books"];

	[self didAccessValueForKey:@"books"];
	return result;
}

@end

@implementation APLAuthorAttributes 
+ (NSString *)name {
	return @"name";
}
@end

@implementation APLAuthorRelationships 
+ (NSString *)books {
	return @"books";
}
@end

