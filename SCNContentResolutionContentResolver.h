//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNContentResolutionContentResolver : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::content_resolution::ContentResolver>, std::__1::shared_ptr<snap::content_resolution::ContentResolver>> _cppRefHandle;
}

+ (id)createWithDependencies:(id)arg1 rankedMediaVariantsProvider:(id)arg2 metricsProcessor:(id)arg3 blizzardLogger:(id)arg4;
+ (id)createWithProviders:(id)arg1 rankedMediaVariantsProvider:(id)arg2 metricsProcessor:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_9ebbd4c1 *)arg1;
- (id)resolveSerializedContentObject:(id)arg1;
- (id)resolveUrl:(id)arg1;
- (void)updateNetworkMapping:(id)arg1;

@end
