//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCGallerySavingLogger;

@protocol SCGallerySavingLoggerListener <NSObject>
- (void)gallerySavingLogger:(SCGallerySavingLogger *)arg1 didLogDirectSnapSaveEventForLensId:(NSString *)arg2;
- (void)gallerySavingLogger:(SCGallerySavingLogger *)arg1 didLogGeofilterDirectSnapSaveEventForLensId:(NSString *)arg2;
@end

