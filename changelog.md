# Changelog - AibouMaker2 LoboServoController

すべての変更履歴は [Semantic Versioning](https://semver.org/lang/ja/) に準拠して記録されています。

---

## [0.9.0-beta-LA] - 2025-07-14

### Added
- Windows用ベータ版アプリ（左腕制御のみ）を初公開
- サーボ制御用スライダーUIを実装（0～180度）
- COMポート・通信速度（115200bps）設定機能
- アバター連動（ジェネリックな箱型モデル）機能
- Arduino用スケッチ `Lobo_ServoControl_20250714.ino` を同梱
- 設定保存ファイル（servo_config.json）自動生成機能
- サーボ反転・補正角・角度制限のUI操作機能

### Known Issues
- 起動時にCOMポート未接続だとアバターとの角度が同期しない（スライダー操作で解消）
- VRMやHumanoidリグ対応は未実装
- エラー発生時の明示的な通知は未実装（無反応状態になることあり）

---

## 今後のバージョン予定（非公開開発中）

この changelog には安定版および公開済みベータ版のみ記録されます。
内部開発ブランチ・試験機能は記載対象外です。

---

© 2025 Studio Hazama714 / 介塚はざま
