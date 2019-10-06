//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, SCCDGalleryProfile, SCCDGalleryQuotaStatusID;

@interface _SCCDGalleryQuotaStatus : NSManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property int lastWarningPercentageValue;
@property int numOfNoticesLeftForSuccessfulSaveValue;
@property int numOfSuccessSavesAfterFullGalleryValue;
@property int numOfWarningsForFullGalleryValue;
@property(readonly, nonatomic) SCCDGalleryQuotaStatusID *objectID;
- (int)primitiveLastWarningPercentageValue;
- (int)primitiveNumOfNoticesLeftForSuccessfulSaveValue;
- (int)primitiveNumOfSuccessSavesAfterFullGalleryValue;
- (int)primitiveNumOfWarningsForFullGalleryValue;
- (void)setPrimitiveLastWarningPercentageValue:(int)arg1;
- (void)setPrimitiveNumOfNoticesLeftForSuccessfulSaveValue:(int)arg1;
- (void)setPrimitiveNumOfSuccessSavesAfterFullGalleryValue:(int)arg1;
- (void)setPrimitiveNumOfWarningsForFullGalleryValue:(int)arg1;

// Remaining properties
@property(retain, nonatomic) NSNumber *lastWarningPercentage; // @dynamic lastWarningPercentage;
@property(retain, nonatomic) NSNumber *numOfNoticesLeftForSuccessfulSave; // @dynamic numOfNoticesLeftForSuccessfulSave;
@property(retain, nonatomic) NSNumber *numOfSuccessSavesAfterFullGallery; // @dynamic numOfSuccessSavesAfterFullGallery;
@property(retain, nonatomic) NSNumber *numOfWarningsForFullGallery; // @dynamic numOfWarningsForFullGallery;
@property(retain, nonatomic) SCCDGalleryProfile *profile; // @dynamic profile;

@end
