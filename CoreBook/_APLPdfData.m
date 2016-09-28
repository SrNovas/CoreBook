// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to APLPdfData.m instead.

#import "_APLPdfData.h"

@implementation APLPdfDataID
@end

@implementation _APLPdfData

+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"PdfData" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"PdfData";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"PdfData" inManagedObjectContext:moc_];
}

- (APLPdfDataID*)objectID {
	return (APLPdfDataID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];

	return keyPaths;
}

@dynamic pdfData;

@dynamic book;

@end

@implementation APLPdfDataAttributes 
+ (NSString *)pdfData {
	return @"pdfData";
}
@end

@implementation APLPdfDataRelationships 
+ (NSString *)book {
	return @"book";
}
@end

