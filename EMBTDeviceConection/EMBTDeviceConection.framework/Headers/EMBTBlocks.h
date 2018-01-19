//
//  EMBTBlocks.h
//  EMBTDeviceConection
//
//  Created by iOS on 2018/1/18.
//  Copyright © 2018年 eMeet. All rights reserved.
//

#ifndef EMBTBlocks_h
#define EMBTBlocks_h
#import <CoreBluetooth/CoreBluetooth.h>
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EMConnectState) {
    EMConnectStateUnconnect,
    EMConnectStateConnecting,
    EMConnectStateConnected,
    EMConnectStateError
};

@class EMBTDevice;

//蓝牙连接状态
typedef void(^EMBluetoothDidUpdateState)(CBCentralManagerState state);

//连接设备状态变化
typedef void(^EMConnectChanged)(EMConnectState state);

//监听数据返回
typedef void(^EMReceivedData)(EMBTDevice *device, NSError *error);

#endif /* EMBTBlocks_h */
