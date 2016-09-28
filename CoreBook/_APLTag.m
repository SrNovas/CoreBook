// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLTag.m instead.

#import "_APLTag.h"

@implementation APLTagID
@end

@implementation _APLTag

+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Tag" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Tag";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Tag" inManagedObjectContext:moc_];
}

- (APLTagID*)objectID {
	return (APLTagID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];

	return keyPaths;
}

@dynamic name;

@dynamic proxyForSorting;

@dynamic bookTags;

- (NSMutableSet<APLBookTag*>*)bookTagsSet {
	[self willAccessValueForKey:@"bookTags"];

	NSMutableSet<APLBookTag*> *result = (NSMutableSet<APLBookTag*>*)[self mutableSetValueForKey:@"bookTags"];

	[self didAccessValueForKey:@"bookTags"];
	return result;
}

@end

@implementation APLTagAttributes 
+ (NSString *)name {
	return @"name";
}
+ (NSString *)proxyForSorting {
	return @"proxyForSorting";
}
@end

@implementation APLTagRelationships 
+ (NSString *)bookTags {
	return @"bookTags";
}
@end

