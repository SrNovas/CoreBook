// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLAnnotation.m instead.

#import "_APLAnnotation.h"

@implementation APLAnnotationID
@end

@implementation _APLAnnotation

+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Annotation" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Annotation";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Annotation" inManagedObjectContext:moc_];
}

- (APLAnnotationID*)objectID {
	return (APLAnnotationID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];

	return keyPaths;
}

@dynamic creationDate;

@dynamic modificationDate;

@dynamic name;

@dynamic text;

@dynamic book;

@dynamic photo;

@end

@implementation APLAnnotationAttributes 
+ (NSString *)creationDate {
	return @"creationDate";
}
+ (NSString *)modificationDate {
	return @"modificationDate";
}
+ (NSString *)name {
	return @"name";
}
+ (NSString *)text {
	return @"text";
}
@end

@implementation APLAnnotationRelationships 
+ (NSString *)book {
	return @"book";
}
+ (NSString *)photo {
	return @"photo";
}
@end

