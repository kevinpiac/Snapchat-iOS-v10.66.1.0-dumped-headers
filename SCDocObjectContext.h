//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCDocObjectContext : NSObject
{
}

- (struct ObservableBuilder)fetchObservableForClass:(Class)arg1 observationQueue:(id)arg2;
- (id)initWithPath:(id)arg1 options:(CDStruct_69d7cc99)arg2 monitor:(id)arg3;
- (id)observe:(id)arg1 callbackQueue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (id)observeFetchedResult:(id)arg1 callbackQueue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (void)performChanges:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)shutdownAsynchronously:(CDUnknownBlockType)arg1;

@end

