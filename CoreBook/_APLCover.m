// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLCover.m instead.

#import "_APLCover.h"

@implementation APLCoverID
@end

@implementation _APLCover

+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Cover" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Cover";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Cover" inManagedObjectContext:moc_];
}

- (APLCoverID*)objectID {
	return (APLCoverID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];

	return keyPaths;
}

@dynamic imageData;

@dynamic book;

@end

@implementation APLCoverAttributes 
+ (NSString *)imageData {
	return @"imageData";
}
@end

@implementation APLCoverRelationships 
+ (NSString *)book {
	return @"book";
}
@end

