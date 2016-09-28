// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLBook.m instead.

#import "_APLBook.h"

@implementation APLBookID
@end

@implementation _APLBook

+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Book" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Book";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Book" inManagedObjectContext:moc_];
}

- (APLBookID*)objectID {
	return (APLBookID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];

	return keyPaths;
}

@dynamic name;

@dynamic urlImage;

@dynamic urlPdf;

@dynamic annotation;

- (NSMutableSet<APLAnnotation*>*)annotationSet {
	[self willAccessValueForKey:@"annotation"];

	NSMutableSet<APLAnnotation*> *result = (NSMutableSet<APLAnnotation*>*)[self mutableSetValueForKey:@"annotation"];

	[self didAccessValueForKey:@"annotation"];
	return result;
}

@dynamic authors;

- (NSMutableSet<APLAuthor*>*)authorsSet {
	[self willAccessValueForKey:@"authors"];

	NSMutableSet<APLAuthor*> *result = (NSMutableSet<APLAuthor*>*)[self mutableSetValueForKey:@"authors"];

	[self didAccessValueForKey:@"authors"];
	return result;
}

@dynamic bookTags;

- (NSMutableSet<APLBookTag*>*)bookTagsSet {
	[self willAccessValueForKey:@"bookTags"];

	NSMutableSet<APLBookTag*> *result = (NSMutableSet<APLBookTag*>*)[self mutableSetValueForKey:@"bookTags"];

	[self didAccessValueForKey:@"bookTags"];
	return result;
}

@dynamic coverImage;

@dynamic pdfDate;

@end

@implementation APLBookAttributes 
+ (NSString *)name {
	return @"name";
}
+ (NSString *)urlImage {
	return @"urlImage";
}
+ (NSString *)urlPdf {
	return @"urlPdf";
}
@end

@implementation APLBookRelationships 
+ (NSString *)annotation {
	return @"annotation";
}
+ (NSString *)authors {
	return @"authors";
}
+ (NSString *)bookTags {
	return @"bookTags";
}
+ (NSString *)coverImage {
	return @"coverImage";
}
+ (NSString *)pdfDate {
	return @"pdfDate";
}
@end

