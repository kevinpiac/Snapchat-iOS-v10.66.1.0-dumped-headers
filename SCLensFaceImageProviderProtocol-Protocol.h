//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensSubPickerImageProviderProtocol-Protocol.h"

@class NSString;

@protocol SCLensFaceImageProviderProtocol <SCLensSubPickerImageProviderProtocol>
- (NSString *)getOriginalImageAtIndex:(unsigned long long)arg1 completion:(void (^)(UIImage *, NSString *, NSDictionary *, NSError *))arg2;
- (_Bool)isPresetImageAtIndex:(unsigned long long)arg1;
- (unsigned long long)rawImageCount;
@end

