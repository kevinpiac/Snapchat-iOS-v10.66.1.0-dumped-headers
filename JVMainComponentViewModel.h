//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class JVOpenImagesOverlayViewModel, NSArray;

@interface JVMainComponentViewModel : SCComposerMarshallableObject
{
    JVOpenImagesOverlayViewModel *_openImagesOverlayViewModel;
    NSArray *_demoModes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *demoModes; // @synthesize demoModes=_demoModes;
- (id)initWithOpenImagesOverlayViewModel:(id)arg1 demoModes:(id)arg2;
@property(retain, nonatomic) JVOpenImagesOverlayViewModel *openImagesOverlayViewModel; // @synthesize openImagesOverlayViewModel=_openImagesOverlayViewModel;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end
