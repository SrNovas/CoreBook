// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLBookTag.m instead.

#import "_APLBookTag.h"

@implementation APLBookTagID
@end

@implementation _APLBookTag

+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"BookTag" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"BookTag";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"BookTag" inManagedObjectContext:moc_];
}

- (APLBookTagID*)objectID {
	return (APLBookTagID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];

	return keyPaths;
}

@dynamic book;

@dynamic tag;

@end

@implementation APLBookTagRelationships 
+ (NSString *)book {
	return @"book";
}
+ (NSString *)tag {
	return @"tag";
}
@end

