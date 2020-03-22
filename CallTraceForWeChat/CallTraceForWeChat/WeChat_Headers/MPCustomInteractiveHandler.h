//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIPercentDrivenInteractiveTransition;
@protocol MPCustomInteractiveHandlerDelegate;

@interface MPCustomInteractiveHandler : NSObject
{
    _Bool _shouldForceCancel;
    id <MPCustomInteractiveHandlerDelegate> _delegate;
    UIPercentDrivenInteractiveTransition *_transitioning;
}

@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) __weak id <MPCustomInteractiveHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldForceCancel; // @synthesize shouldForceCancel=_shouldForceCancel;
- (void).cxx_destruct;
- (void)endInateractiveWithComplete:(_Bool)arg1 panGesture:(id)arg2;
- (void)updateInateractiveProgress:(double)arg1 panGesture:(id)arg2;
- (void)beginInateractive;
- (_Bool)isInteracting;
- (double)interactiveTransitioningProgress;
- (id)interactiveTransitioning;
- (id)initWithDelegate:(id)arg1;

@end
