//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensDownloadableContent.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString;

@interface SCLensLocalDownloadableContent : SCLensDownloadableContent <SCTraceEnabled>
{
}

- (id)faceTrackingResourcesChecksum;
- (id)faceTrackingResourcesPath;
- (id)fileNames;
@property(readonly) unsigned long long hash;
- (_Bool)isContentAvailable;
- (_Bool)isEqual:(id)arg1;
- (void)remove;
- (_Bool)shouldValidateChecksum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

