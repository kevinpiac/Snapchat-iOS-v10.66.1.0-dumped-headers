//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGeofilterDependencyValidation-Protocol.h"

@class NSString, SCArSegmentationDownloadedSky;

@interface SCArSegmentationDownloadedInput : NSObject <SCGeofilterDependencyValidation>
{
    _Bool _shouldStillDisplayWithoutSegmentationMatch;
    SCArSegmentationDownloadedSky *_sky;
}

- (void).cxx_destruct;
- (unsigned long long)detectionType;
@property(nonatomic) _Bool shouldStillDisplayWithoutSegmentationMatch; // @synthesize shouldStillDisplayWithoutSegmentationMatch=_shouldStillDisplayWithoutSegmentationMatch;
@property(retain, nonatomic) SCArSegmentationDownloadedSky *sky; // @synthesize sky=_sky;
- (id)validationErrors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

