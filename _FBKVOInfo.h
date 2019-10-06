//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBKVOController, NSString;

@interface _FBKVOInfo : NSObject
{
    FBKVOController *_controller;
    NSString *_keyPath;
    unsigned long long _options;
    SEL _action;
    void *_context;
    CDUnknownBlockType _block;
    unsigned char _state;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithController:(id)arg1 keyPath:(id)arg2;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4 action:(SEL)arg5 context:(void *)arg6;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (_Bool)isEqual:(id)arg1;

@end
