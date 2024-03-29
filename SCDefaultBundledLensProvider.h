//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBundledLensProvider-Protocol.h"
#import "SCLensBundledResourcePathProvider-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnitTestCompatibleBundledLensProvider-Protocol.h"

@class NSBundle, NSString;

@interface SCDefaultBundledLensProvider : NSObject <SCTraceEnabled, SCBundledLensProvider, SCLensBundledResourcePathProvider, SCUnitTestCompatibleBundledLensProvider>
{
    NSBundle *_bundle;
}

- (void).cxx_destruct;
- (id)bundledLensFromDictionary:(id)arg1;
- (id)bundledLensWithCode:(id)arg1;
- (id)bundledLensWithCode:(id)arg1 bundleName:(id)arg2 resourceFileName:(id)arg3;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)pathForBundledResource:(id)arg1 inDirectory:(id)arg2;
- (id)pathForBundledResource:(id)arg1 ofType:(id)arg2 inBundleNamed:(id)arg3 inDirectory:(id)arg4;
- (id)pathForBundledResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

