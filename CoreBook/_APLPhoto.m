// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLPhoto.m instead.

#import "_APLPhoto.h"

@implementation APLPhotoID
@end

@implementation _APLPhoto

+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Photo" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Photo";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Photo" inManagedObjectContext:moc_];
}

- (APLPhotoID*)objectID {
	return (APLPhotoID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];

	return keyPaths;
}

@dynamic imageData;

@dynamic annotations;

- (NSMutableSet<APLAnnotation*>*)annotationsSet {
	[self willAccessValueForKey:@"annotations"];

	NSMutableSet<APLAnnotation*> *result = (NSMutableSet<APLAnnotation*>*)[self mutableSetValueForKey:@"annotations"];

	[self didAccessValueForKey:@"annotations"];
	return result;
}

@end

@implementation APLPhotoAttributes 
+ (NSString *)imageData {
	return @"imageData";
}
@end

@implementation APLPhotoRelationships 
+ (NSString *)annotations {
	return @"annotations";
}
@end

