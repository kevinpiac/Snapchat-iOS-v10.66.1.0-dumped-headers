//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDynamicGeofilterRenderable-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SCDynamicGeoFilterBundle : NSObject <SCDynamicGeofilterRenderable>
{
    NSMutableDictionary *resourceMap;
    NSString *_bundleKey;
}

+ (id)bundleKeyWithTextResource:(id)arg1;
- (void).cxx_destruct;
- (id)_bundleUrl;
@property(readonly, copy, nonatomic) NSString *bundleKey; // @synthesize bundleKey=_bundleKey;
- (void)getUIImagesWithCanvasSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2 contextData:(id)arg3 dynamicContextProperties:(id)arg4 userSession:(id)arg5 displayName:(id)arg6;
- (id)initWithTextResouce:(id)arg1;
- (_Bool)mergeWithBundle:(id)arg1;

@end

